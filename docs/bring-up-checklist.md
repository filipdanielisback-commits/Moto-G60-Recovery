# Device bring-up checklist

This checklist records evidence needed before a device tree or image can be considered usable.

## Identify the exact device

- [ ] Confirm the exact retail model and regional variant.
- [ ] Confirm the device codename from trusted device properties or manufacturer documentation.
- [ ] Record the Android version and build fingerprint.
- [ ] Record the SoC and architecture from reliable device information.
- [ ] Identify whether recovery is a dedicated partition or is packaged in boot/vendor_boot.

## Collect and verify source material

- [ ] Obtain the matching stock firmware for the exact variant.
- [ ] Preserve an unmodified copy of the stock boot-chain images and their checksums.
- [ ] Locate the matching kernel source or establish what supported kernel artifact is available.
- [ ] Review the partition map and recovery fstab from verified sources.
- [ ] Identify encryption and data-decryption requirements.
- [ ] Check the applicable TWRP branch and its build instructions.

## Validate the device tree

- [ ] Populate BoardConfig only from verified values.
- [ ] Add product makefiles and required dependencies.
- [ ] Add recovery init configuration and fstab entries.
- [ ] Confirm display dimensions, pixel format, density, and touch input.
- [ ] Confirm required storage and filesystem support.
- [ ] Document any unavailable functionality instead of guessing.

## Functional test plan

- [ ] Recovery starts on the exact supported variant.
- [ ] Display and touchscreen work reliably.
- [ ] Battery and clock information are accurate.
- [ ] ADB connection and sideload are detected correctly.
- [ ] Backup and restore are validated using non-critical test data.
- [ ] Mount and wipe screens identify targets correctly and require confirmation.
- [ ] Reboot targets are reported accurately.
- [ ] Logs are reviewed for errors.
- [ ] A tested return-to-stock path is documented before any public release.

**Do not treat a successful compile as proof of compatibility.** Keep all builds marked experimental until the checklist has been completed on the exact supported hardware.
