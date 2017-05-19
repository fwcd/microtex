#ifndef LATEX_H_INCLUDED
#define LATEX_H_INCLUDED

#include "graphic/graphic.h"
#include "graphic/graphic_basic.h"
#include "render.h"
#include "common.h"

#include <string>

using namespace std;
using namespace tex;

namespace tex {

class TeXFormula;

class LaTeX {
private:
	static TeXFormula* _formula;
	static TeXRenderBuilder* _builder;
public:
	/**
	 * Initialize TeX context with specified root path of resources
	 *
	 * @param res_root_path
	 * 		Root path of resources
	 */
	static void init(const string& res_root_path);

	/**
	 * Initialize TeX context
	 */
	static void init();

	/**
	 * Parse LaTeX formatted string to TeXRender
	 *
	 * @param latex
	 * 		LaTeX formatted string
	 * @param width
	 * 		Context width
	 * @param textSize
	 * 		Text size
	 * @param lineSpace
	 * 		Line space
	 * @param fg
	 * 		Foreground color
	 */
	static TeXRender* parse(const wstring& latex, int width, float textSize, float lineSpace, color fg);

	/**
	 * Release the LaTeX context
	 */
	static void release();
};

}

#endif // LATEX_H_INCLUDED