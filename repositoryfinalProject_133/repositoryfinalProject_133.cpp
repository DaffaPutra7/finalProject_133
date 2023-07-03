#include <iostream>
using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;

public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}
	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return 0; }
	virtual void input() { return 0; }

	void setPresensi(float nilai) {
		this->presensi = nilai;
	}

	float getPresensi() {
		return presensi;
	}

	void setActivity(float nilai) {
		this->activity = nilai;
	}

	float getActivity() {
		return activity;
	}

	void setExercise(float nilai) {
		this->exercise;
	}

	float getExercise(float nilai) {
		return  exercise;
	}

	void setTugasAkhir(float nilai) {
		this->tugasAkhir;
	}

	float getTugasAkhir() {
		return tugasAkhir;
	}
	//isi disini
};
class Pemrograman : public MataKuliah { //isi disini
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;

public:
	Pemrograman() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}

	void setPresensi(float nilai) :
		MataKuliah(nilai = 90) {
		cout << "Nilai Presensi dibuat\n" << endl;
	}
	
	void setActivity(float nilai) :
		MataKuliah(nilai = 80) {
		cout << "Nilai Activity dibuat\n" << endl;
	}

	void setExercise(float nilai) :
		Matakuliah(nilai = 60) {
		cout << "Nilai Exercise dibuat\n" << endl;
	}


};

int main() { //isi disini
}
