#include<osgViewer/Viewer>

#include<osgDB/ReadFile>

#include <osgViewer/ViewerEventHandlers>
#include <osgGA/StateSetManipulator>
int main(int argc, char **argv)

{
	osgViewer::Viewer viewer;

	viewer.setSceneData(osgDB::readNodeFile("glider.osg"));

	//���״̬�¼�
	viewer.addEventHandler(new osgGA::StateSetManipulator(viewer.getCamera()->getOrCreateStateSet()));
	//���ڴ�С�仯�¼�
	viewer.addEventHandler(new osgViewer::WindowSizeHandler);
	//���һЩ����״̬����
	viewer.addEventHandler(new osgViewer::StatsHandler);
	viewer.addEventHandler(new osgViewer::HelpHandler);

	viewer.run();
	return 0;
}