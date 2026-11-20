# Moto G60 device configuration

**Status: unverified placeholder. Do not use this directory to build or flash an image yet.**

This directory is reserved for the Moto G60-specific TWRP device tree after the exact device variant and boot architecture have been established.

## Required evidence

Record the following before adding build variables:

- Exact model/region variant:
- Device codename:
- Android version/build fingerprint:
- SoC/platform:
- Kernel source or matching kernel artifact:
- Boot architecture (A-only/A-B, slots, dynamic partitions):
- Recovery location (recovery, boot, vendor_boot, or other):
- Image header/version requirements:
- Verified partition map source:
- Recovery fstab source:
- Encryption/decryption requirements:
- Required vendor components:

Leave unknown fields blank. Do not infer values from a similarly named device or another Moto G60 variant.

## Expected future tree

The exact filenames depend on the selected TWRP branch. Typical components may include product makefiles, BoardConfig, AndroidProducts, recovery init files, fstab, and device-specific resources. Add only files whose values have been verified.
