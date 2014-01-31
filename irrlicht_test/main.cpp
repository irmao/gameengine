#include <irrlicht/irrlicht.h>
#include <irrlicht/driverChoice.h>
#pragma comment(lib, "Irrlicht.lib")

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

int main() 
{
	E_DRIVER_TYPE driverType = driverChoiceConsole();
	IrrlichtDevice *device = createDevice( driverType, dimension2d<u32>(1280, 960) );
	IVideoDriver* driver = device->getVideoDriver();
    ISceneManager* scene = device->getSceneManager();

	scene->addCameraSceneNodeFPS();
	device->getCursorControl()->setVisible(false);
	
    ITexture* sprite1 = driver->getTexture("../KURO_M_0.png");
	driver->makeColorKeyTexture( sprite1, position2d<s32>(0, 0) );				// Isto faz o primeiro pixel do sprite ser entendido como alpha
	IBillboardSceneNode* billBoard1 = scene->addBillboardSceneNode( 0, dimension2d<f32>(50, 50), vector3df(20, -75, 450) );
	billBoard1->setMaterialFlag(EMF_LIGHTING, false);							// Sem isso o modelo fica branco
	billBoard1->setMaterialTexture(1, sprite1);
	billBoard1->setMaterialType(EMT_TRANSPARENT_VERTEX_ALPHA);					// Isso fala pra transparentizar as cores entendidas como alpha
    
    ITexture* sprite2 = driver->getTexture("../KURO_M_1.png");
	driver->makeColorKeyTexture( sprite2, position2d<s32>(0, 0) );
	IBillboardSceneNode* billBoard2 = scene->addBillboardSceneNode( 0, dimension2d<f32>(50, 50), vector3df(20, -75, 650) );
	billBoard2->setMaterialFlag(EMF_LIGHTING, false);
	billBoard2->setMaterialTexture(1, sprite2);
	billBoard2->setMaterialType(EMT_TRANSPARENT_VERTEX_ALPHA);	
    
    
	while( device->run() ) 
	{
		driver->beginScene(true, true, SColor(255, 70, 130, 200) );
        scene->drawAll();
        driver->endScene();
    }

	device->drop();
    return 0;
}
