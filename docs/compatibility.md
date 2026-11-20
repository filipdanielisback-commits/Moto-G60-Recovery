# Compatibility policy

## Initial target

The initial target is the Motorola Moto G60 **XT2135-2**, regional channel **RETEU**, firmware build **S2RIS32.32-20-9-9-2-3**, codename **hanoip** (Android 12).

Research has identified an existing TeamWin TWRP device listing and device tree for the combined Moto G60/G40 Fusion hanoip family. This project should audit and adapt that upstream work rather than assume a new device tree is needed. The upstream tree inspected is on the `android-11` branch, so compatibility with the target Android 12 firmware is not yet established.

The device uses dynamic partitions. Treat the exact super/logical partition behavior and recovery image target as device-specific facts to verify from upstream sources and matching firmware—not as values to guess.

See [the device profile](device-profile.md) for source links and outstanding questions.

## No universal image

Recovery images are not interchangeable between phones merely because they share a brand, chipset family, display size, or Android version. Each supported model/variant requires its own validated device configuration.

## Status labels

- **Scaffold:** documentation and placeholder source only.
- **Buildable:** the source builds with a documented device tree; this does not imply it boots.
- **Boot-tested:** recovery has started on the exact listed variant.
- **Function-tested:** touchscreen, storage, ADB, and listed operations have been tested.
- **Release candidate:** compatibility evidence and recovery/restore notes have been reviewed.

The project currently has **Scaffold** status only.

## Reporting a device

A future port should include the exact model/variant, codename, Android build, boot architecture, source references, test results, and known limitations. Never submit another device's recovery image as a substitute.
