import time

waktu_awal = time.time()
while True:
    waktu_berjalan = time.time()
    waktu_dinamis = waktu_berjalan - waktu_awal
    detik = int(waktu_dinamis % 60)
    menit = int(waktu_dinamis // 60 % 60)
    print(f"{menit:02d}:{detik:02d}")


