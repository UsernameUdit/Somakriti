from astropy.time import Time
from datetime import datetime, timezone

t_str = Time("2026-11-20 06:00:00", scale="utc")
print(f"JD:  {t_str.jd}")