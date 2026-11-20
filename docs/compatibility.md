# Compatibility policy

## Supported target

The initial target is the Motorola Moto G60, but exact variant and boot architecture are not yet verified in this repository.

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
