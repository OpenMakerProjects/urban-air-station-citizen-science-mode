# Urban Air Station Citizen Science Mode

Build a environment prototype that uses turbidity sensor, GPS module to guide repeatable community observations. Include setup instructions, a circuit diagram, tested firmware, and sample output.

## Project details

| Field | Value |
| --- | --- |
| Roadmap ID | 204 |
| Category | Environment |
| Platform | Particle Boron |
| Difficulty | Advanced |
| Estimated build time | 52 hours |
| Connectivity | Wi-Fi |
| Core components | turbidity sensor, GPS module |
| Control mode | interactive monitor |

## Repository layout

- `src/main.cpp`: runnable firmware or application
- `docs/wiring.md`: suggested low-voltage wiring plan
- `docs/architecture.md`: system data flow
- `docs/test-plan.md`: repeatable verification steps
- `sample-data/example.json`: example telemetry record
- `tools/validate.py`: dependency-free repository validation

## Quick start

1. Open the repository with Particle Workbench.
2. Select the Boron target.
3. Compile and flash `src/main.cpp`, then inspect serial telemetry at 115200 baud.

## Expected behavior

Citizen Science Mode demonstration with repeatable test steps. The default implementation supports simulated or generic analog inputs so the control path can be exercised before hardware-specific drivers are added.

## Hardware adaptation

The included code is a safe reference implementation. Update pin assignments and sensor conversions from the exact component datasheets, then repeat the test plan before connecting actuators.

## License

MIT
