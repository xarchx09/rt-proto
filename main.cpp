#include <qapplication.h>
#include <light.h>
#include <qdebug.h>
#include <object.h>
#include <camera.h>
#include <config.h>
#include <ray.h>
#include <plane.h>
#include <qlabel.h>
#include <Image.h>



int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	int w = RENDER_SIZE, h = RENDER_SIZE;
	std::unique_ptr<Color[]> pixels = std::make_unique<Color[]>(w*h);

	for (int y = 0; y < h; ++y)
	{
		for (int x = 0; x < w; ++x)
		{
			float dx = (float)x / ((float)w -1) - 0.5;
			float dy = 1.0  - (float)y / ((float)h - 1)  -0.5;

			Color color(0);

			pixels[(y * w) + x] += color;
		}
	}
	

	Image img(w, h, pixels);

	QLabel widget;
	widget.setPixmap(QPixmap::fromImage(img.data()));
	widget.show();

	app.exec();
}