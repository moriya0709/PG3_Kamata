#include <Novice.h>

const char kWindowTitle[] = "LE2D_22_モリヤ_ユウゴ";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(_In_ HINSTANCE, _In_opt_ HINSTANCE, _In_ LPSTR, _In_ int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	
	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
