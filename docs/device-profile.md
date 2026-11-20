# Moto G60 XT2135-2 device profile

**Research status:** preliminary, source-backed identification. This is not a validated build configuration.

## Identified target

| Field | Value | Evidence |
|---|---|---|
| Model | Motorola Moto G60, XT2135-2 | User-provided model number |
| Firmware build | S2RIS32.32-20-9-9-2-3 | User-provided build; exact firmware filename is also named in Motorola's kernel-source request |
| Android release | Android 12 | Matching Motorola firmware release / kernel source tag |
| Regional channel | RETEU (Europe retail) | Matching firmware filename: XT2135-2_HANOIP_RETEU_12_... |
| Device codename | hanoip | TeamWin device listing and TeamWin device tree |
| Partition model | Dynamic partitions | TeamWin device listing |

## Existing upstream work

This target is not a from-scratch TWRP port:

- TeamWin lists a current TWRP device entry for Motorola G60/G40 Fusion, codename `hanoip`.
- TeamWin links to its public device tree: [TeamWin/android_device_motorola_hanoip](https://github.com/TeamWin/android_device_motorola_hanoip). The inspected branch is `android-11`; do not assume it is automatically compatible with this Android 12 firmware.
- TeamWin's listing states that the device uses dynamic partitions. It notes that the logical partitions inside `super` are not handled as ordinary independently flashable partitions by TWRP; the device's exact supported workflow must be checked against the current upstream documentation.
- Motorola published a matching kernel source release: [MMI-S2RIS32.32-20-9-9-2-3](https://github.com/MotorolaMobilityLLC/kernel-msm/releases/tag/MMI-S2RIS32.32-20-9-9-2-3).

## Important compatibility questions

These items remain unverified for this project's own build:

- Whether the currently listed official TWRP binary explicitly supports the exact XT2135-2 RETEU firmware/build.
- Whether the upstream `android-11` device tree is suitable for an Android 12 recovery build, or needs a maintained branch/update.
- The exact recovery packaging/boot target and image requirements for this firmware.
- Current kernel configuration, prebuilt dependencies, device-specific fstab, encryption support, and touchscreen behavior.
- A tested, model-specific recovery and restore procedure.

Do not copy guessed BoardConfig values, partition sizes, fstab entries, or image targets into this repository. Keep the project marked **Scaffold** until the upstream tree and matching firmware sources have been audited and a build has been tested on the exact variant.

## Sources

- [TeamWin device page: Motorola G60/G40 Fusion](https://test.twrp.me/motorola/motorolamotog60g40fusion.html)
- [TeamWin hanoip device tree](https://github.com/TeamWin/android_device_motorola_hanoip)
- [Motorola kernel source request for this exact build](https://github.com/MotorolaMobilityLLC/kernel-msm/issues/574)
- [Motorola kernel source release for this exact build](https://github.com/MotorolaMobilityLLC/kernel-msm/releases/tag/MMI-S2RIS32.32-20-9-9-2-3)
