# Moto-G60-Recovery

An open-source, touchscreen-oriented Android recovery project for the Motorola Moto G60. The long-term plan is to use Team Win Recovery Project (TWRP) as the recovery foundation and add a clearer touch UI, feature status screens, battery information, and device-specific support.

> **Development status: scaffold only — not a bootable recovery.**
> No device tree, kernel configuration, partition map, recovery image, or installation package has been validated yet. Do not flash files from this repository to a phone.

## Goals

- Touchscreen-first navigation for recovery menus.
- A clear home screen with battery and time information.
- Planned feature areas: ADB sideload, OS package installation, backup, wipe, mount, advanced tools, and reboot.
- A visible **Unlock Bootloader** entry that remains disabled until **20 November 2027**. This project will not bypass Motorola's bootloader authorization or verified-boot protections.
- A maintainable layout that can later host separately verified device ports.

## Repository layout

```text
Moto-G60-Recovery/
├── README.md
├── .gitignore
├── LICENSE
├── docs/
│   ├── architecture.md
│   ├── bring-up-checklist.md
│   ├── compatibility.md
│   └── feature-status.md
├── device/
│   └── moto-g60/
│       └── README.md
├── recovery/
│   └── ui/
│       ├── README.md
│       └── FeatureFlags.h
└── features/
    ├── adb-sideload/README.md
    ├── install-os/README.md
    ├── backup/README.md
    ├── wipe/README.md
    ├── mount/README.md
    ├── advanced/README.md
    └── reboot/README.md
```

## Important compatibility notes

A recovery image is device-specific. The correct output may depend on the exact Moto G60 variant, boot layout, kernel, vendor files, encryption implementation, and partition metadata. This repository intentionally leaves those values unset until they can be verified from reliable device-specific sources.

TWRP's maintainer guidance requires a device tree and functional testing of the resulting image. See the links below before implementing a build configuration.

## Development

1. Read [the architecture overview](docs/architecture.md).
2. Complete the [device bring-up checklist](docs/bring-up-checklist.md).
3. Record verified details in [device/moto-g60](device/moto-g60/README.md).
4. Review the [feature status](docs/feature-status.md) before implementing a feature.

## Upstream references

- [TWRP maintainer FAQ](https://twrp.me/faq/OfficialMaintainer.html)
- [TWRP AOSP build manifest](https://github.com/minimal-manifest-twrp/platform_manifest_twrp_aosp)
- [TWRP common Qualcomm device files](https://github.com/TeamWin/android_device_qcom_twrp-common)

## License

The repository currently contains the GNU General Public License v3.0 text. Check the license of every upstream component and device-specific file before incorporating or redistributing it. The presence of this license file does not relicense third-party code.
