Import("env")
import os

def read_dotenv(path):
    values = {}
    try:
        with open(path, "r", encoding="utf-8") as f:
            for line in f:
                line = line.strip()
                if not line or line.startswith("#") or "=" not in line:
                    continue
                k, v = line.split("=", 1)
                values[k.strip()] = v.strip()
    except FileNotFoundError:
        pass
    return values

vals = read_dotenv(".env")

if "LED_ON_MS" in vals:
    env.Append(CPPDEFINES=[("LED_ON_MS", vals["LED_ON_MS"])])
if "LED_OFF_MS" in vals:
    env.Append(CPPDEFINES=[("LED_OFF_MS", vals["LED_OFF_MS"])])
