# Moto G60 device configuration

**Target identified:** Motorola Moto G60 XT2135-2, RETEU, Android 12 build S2RIS32.32-20-9-9-2-3, codename `hanoip`.

**Status: research-backed profile; project device tree not yet implemented or validated. Do not use this directory to build or flash an image yet.**

## Upstream starting points

- TeamWin device listing: [Motorola G60/G40 Fusion](https://test.twrp.me/motorola/motorolamotog60g40fusion.html)
- TeamWin device tree: [android_device_motorola_hanoip](https://github.com/TeamWin/android_device_motorola_hanoip) (inspected branch: `android-11`)
- Matching Motorola kernel source release: [MMI-S2RIS32.32-20-9-9-2-3](https://github.com/MotorolaMobilityLLC/kernel-msm/releases/tag/MMI-S2RIS32.32-20-9-9-2-3)

TeamWin identifies the device family as `hanoip` and states that it uses dynamic partitions. The existence of an upstream tree does not prove that its current branch or a published recovery image is compatible with this exact Android 12 firmware.

## Required audit before implementation

- [ ] Compare the upstream tree's branch, commit history, BoardConfig, product makefiles, fstab, and recovery init files against the target firmware.
- [ ] Verify the exact recovery image packaging/boot target for XT2135-2.
- [ ] Review the matching kernel source release and required configuration.
- [ ] Verify partition metadata and dynamic-partition behavior from trusted matching sources.
- [ ] Verify encryption/decryption requirements and required vendor components.
- [ ] Verify display, touch input, storage, and ADB support.
- [ ] Record source revisions and checksums for all imported components.
- [ ] Review all upstream licenses and preserve required notices.

Do not copy guessed BoardConfig values, partition sizes, fstab entries, or image targets into this repository. Leave unknown values explicitly unresolved.

## Expected future tree

The exact filenames depend on the selected TWRP branch. Typical components may include product makefiles, BoardConfig, AndroidProducts, recovery init files, fstab, and device-specific resources. Adapt upstream files only after reviewing their compatibility and licensing.
