# Upstream hanoip TWRP tree audit

**Audit scope:** public source files on `DhineshCool/twrp_device_motorola_hanoip`, branch `twrp-12.1`. This is a static source review only. No code was built, and no image was tested on hardware.

## Summary

The `twrp-12.1` branch is a more relevant candidate to study than the TeamWin `android-11` branch for an Android 12-era device, but its name alone does not establish compatibility with firmware `S2RIS32.32-20-9-9-2-3`. Treat it as a reference tree, not as a drop-in configuration.

## Files inspected

- `README.md`
- `BoardConfig.mk`
- `device.mk`
- `twrp_hanoip.mk`
- `AndroidProducts.mk`
- `AndroidBoard.mk`
- `board-info.txt`
- `system.prop`
- `vendor.prop`
- `recovery/root/system/etc/recovery.fstab`

## Findings

### Device and build identity

- The tree identifies the product as `hanoip`, with product name `twrp_hanoip`.
- The README describes the shared Moto G40/G60 device family and Snapdragon 732G / SM6150 platform.
- The product makefile exposes `twrp_hanoip-eng` and `twrp_hanoip-userdebug` lunch choices.
- The branch is named `twrp-12.1`, while `BoardConfig.mk` sets `PLATFORM_VERSION := 16.1.0`. This is a version-label mismatch that must be understood against the manifest and TWRP build system; do not infer Android compatibility from the branch name.

### Boot and partition configuration

The inspected BoardConfig declares boot header version 3, A/B-related flags, recovery-as-boot behavior, and dynamic partition settings. It also contains concrete partition sizes, kernel offsets, and prebuilt kernel/DTB/DTBO paths.

These are device-specific build inputs. They have **not** been independently checked against the exact XT2135-2 RETEU firmware package in this project. Do not copy them into this repository or treat them as validated values.

TeamWin's current device page independently identifies dynamic partitions for hanoip and explains that logical partitions inside `super` are handled differently from physical partitions. The exact recovery image packaging and supported workflow still require verification.

### Recovery fstab and encryption

The tree's recovery fstab includes logical system/vendor/product partitions, metadata and userdata entries, and FBE-related options. This confirms that encryption and mount behavior are nontrivial parts of the port.

Do not reuse the fstab as-is until every source partition, filesystem, flag, and encryption option has been compared with the matching stock firmware and the target recovery environment. Incorrect fstab entries can cause failed mounts or data loss.

### Security-sensitive settings

The inspected tree contains settings such as `ro.adb.secure=0`, an SELinux-permissive kernel command-line addition, and other debugging/build relaxations.

These must not be copied blindly. The custom project should retain appropriate ADB authentication and avoid weakening device security merely to make a development build convenient. Any recovery-specific debugging configuration needs an explicit security review and must not be confused with a production-safe configuration.

### Prebuilt artifacts

The tree references prebuilt kernel, DTB, and DTBO artifacts. Their provenance, exact source firmware match, hashes, and redistribution terms have not been verified here. Do not copy or redistribute these binaries as part of this project without checking provenance and licenses.

## Recommended next development action

1. Pin the upstream branch to a specific commit and record its license and provenance.
2. Compare the matching stock firmware's boot-related metadata, partition metadata, fstab, and kernel build information with the upstream tree.
3. Resolve the branch/platform version mismatch.
4. Review security-sensitive properties and remove unnecessary debug relaxations from any new project configuration.
5. Only then prepare a proposed device-tree adaptation for review. Keep all device-specific values explicitly marked unverified until supported by matching evidence.

## References

- [DhineshCool hanoip tree, twrp-12.1 branch](https://github.com/DhineshCool/twrp_device_motorola_hanoip/tree/twrp-12.1)
- [BoardConfig.mk](https://github.com/DhineshCool/twrp_device_motorola_hanoip/blob/twrp-12.1/BoardConfig.mk)
- [Recovery fstab](https://github.com/DhineshCool/twrp_device_motorola_hanoip/blob/twrp-12.1/recovery/root/system/etc/recovery.fstab)
- [TeamWin current hanoip device page](https://twrp.me/motorola/motorolamotog60g40fusion.html)
- [Motorola matching kernel source release](https://github.com/MotorolaMobilityLLC/kernel-msm/releases/tag/MMI-S2RIS32.32-20-9-9-2-3)
