#include "5.h"

void printPoint(Point point);
void kock(int n, Point startPoint, Point endPoint);

void kochCurve(void)
{
	int n;
	scanf("%d", &n);
	Point startPoint, endPoint;
	startPoint.x = 0.0;
	startPoint.y = 0.0;
	endPoint.x = 100.0;
	endPoint.y = 0.0;
	printPoint(startPoint);
	if (n > 0) {
		kock(n, startPoint, endPoint);
	}
	printPoint(endPoint);
}

void printPoint(Point point) {
	printf("%.10f %.10f\n", point.x, point.y);
}

void kock(int n, Point startPoint, Point endPoint) {
	if (n == 0) {
		return;
	}
	Point s, u, t;
	s.x = 1.0 * endPoint.x / 3.0 + 2.0 * startPoint.x / 3.0;
	s.y = 1.0 * endPoint.y / 3.0 + 2.0 * startPoint.y / 3.0;
	t.x = 2.0 * endPoint.x / 3.0 + 1.0 * startPoint.x / 3.0;
	t.y = 2.0 * endPoint.y / 3.0 + 1.0 * startPoint.y / 3.0;
	u.x = s.x + (t.x - s.x) / 2.0 - (t.y - s.y) * sqrt(3.0) / 2.0;
	u.y = s.y + (t.x - s.x) * sqrt(3.0) / 2 + (t.y - s.y) / 2.0;
	kock(n - 1, startPoint, s);
	printPoint(s);
	kock(n - 1, s, u);
	printPoint(u);
	kock(n - 1, u, t);
	printPoint(t);
	kock(n - 1, t, endPoint);
}