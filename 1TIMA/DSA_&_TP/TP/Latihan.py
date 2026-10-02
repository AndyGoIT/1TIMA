dataSiswa = [
  {"nama": "Andi", "nilai": 85, "kelas": "1TIMA"},
  {"nama": "Budi", "nilai": 95, "kelas": "1TIMA"},
  {"nama": "Citra", "nilai": 75, "kelas": "1TIMB"},
  {"nama": "Dewi", "nilai": 80, "kelas": "1TIMB"},
  {"nama": "Eko", "nilai": 95, "kelas": "1TIMA"},
  {"nama": "Fajar", "nilai": 70, "kelas": "1TIMB"},
  {"nama": "Gita", "nilai": 88, "kelas": "1TIMA"},
]

jumlahKelas = {}

for siswa in dataSiswa:
  kelas = siswa["kelas"]

  if kelas not in jumlahKelas:
    jumlahKelas[kelas] = 0
  jumlahKelas[kelas] += 1

print("Jumlah Siswa per Kelas: ")
for kelas, jumlah in jumlahKelas.items():
  print(kelas + ":", jumlah, "siswa")

print("\nDaftar Lulus:")
for siswa in dataSiswa:
  if siswa["nilai"] >= 80:
    print("-", siswa["nama"], "(Nilai:", siswa["nilai"], ")")

tidakLulus = {}
for siswa in dataSiswa:
  if siswa["nilai"] < 80:
    kelas = siswa["kelas"]
    if kelas not in tidakLulus:
      tidakLulus[kelas] = 0
    tidakLulus[kelas] += 1

print("\nDaftar Tidak Lulus:")
for kelas, jumlah in tidakLulus.items():
  print(kelas + ":", jumlah, "siswa")