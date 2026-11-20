# Moto G60 XT2135-2 device profile

**Research status:** preliminary, source-backed identification. This is not a validated build configuration.

## Identified target

| Field | Value | Evidence |
|---|---|---|
| Model | Motorola Moto G60, XT2135-2 | User-provided model number |
| Firmware build | S2RIS32.32-20-9-9-2-3 | User-provided build; exact firmware source release is available from Motorola |
| Android release | Android 12 | Matching Motorola firmware release / kernel source tag |
| Regional channel | RETEU (Europe retail) | Matching firmware filename |
| Device codename | hanoip | TeamWin device listing and device tree |
| Partition model | Dynamic partitions | TeamWin device listing |

## Existing upstream work

This target is not a from-scratch TWRP port:

- TeamWin lists current TWRP support for Motorola G60/G40 Fusion, codename `hanoip`.
- TeamWin's device tree is on the `android-11` branch: [TeamWin/android_device_motorola_hanoip](https://github.com/TeamWin/android_device_motorola_hanoip).
- A separate community tree has a `twrp-12.1` branch: [DhineshCool/twrp_device_motorola_hanoip](https://github.com/DhineshCool/twrp_device_motorola_hanoip/tree/twrp-12.1). It is a candidate for study, not yet validated against this exact firmware.
- Motorola published matching kernel source: [MMI-S2RIS32.32-20-9-9-2-3](https://github.com/MotorolaMobilityLLC/kernel-msm/releases/tag/MMI-S2RIS32.32-20-9-9-2-3).

## Preliminary upstream audit

A static review of the community `twrp-12.1` branch found a hanoip product definition, A/B and recovery-as-boot declarations, dynamic-partition configuration, and a recovery fstab with logical partitions and file-based-encryption-related options.

Important unresolved issues:
- The branch name is `twrp-12.1`, but its `BoardConfig.mk` sets `PLATFORM_VERSION := 16.1.0`; this needs to be understood in the context of the actual build manifest.
- Device-specific boot parameters, partition sizes, prebuilt kernel/DTB/DTBO files, and fstab values have not been independently matched to the exact XT2135-2 RETEU firmware.
- The upstream tree contains security-sensitive debugging settings, including `ro.adb.secure=0` and a permissive SELinux kernel-command-line setting. Do not copy these blindly into this project.
- Prebuilt artifact provenance and redistribution terms have not yet been reviewed.

See [the upstream audit report](upstream-hanoip-audit.md) for inspected files, findings, and remaining checks.

## Compatibility status

The repository remains **Scaffold**. No device tree has been imported, no recovery image has been built, and no image has been tested on the exact XT2135-2 variant.

Do not copy guessed or unaudited BoardConfig values, partition sizes, fstab entries, or image targets into this repository. Keep all unknown values unresolved until they are supported by matching firmware evidence.

## Sources

- [TeamWin device page: Motorola G60/G40 Fusion](https://twrp.me/motorola/motorolamotog60g40fusion.html)
- [TeamWin hanoip device tree](https://github.com/TeamWin/android_device_motorola_hanoip)
- [Community hanoip TWRP 12.1 tree](https://github.com/DhineshCool/twrp_device_motorola_hanoip/tree/twrp-12.1)
- [Motorola kernel source release for this build](https://github.com/MotorolaMobilityLLC/kernel-msm/releases/tag/MMI-S2RIS32.32-20-9-9-2-3)
