#ifndef ENCAPSULATION_H
#define ENCAPSULATION_H

#include "encapsulation_global.h"

#include <extensionsystem/iplugin.h>

#include <QSharedPointer>

namespace Encapsulation
{
	namespace Internal
	{
		struct Settings;

		class EncapsulationPlugin : public ExtensionSystem::IPlugin
		{
				Q_OBJECT
				Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QtCreatorPlugin" FILE "Encapsulation.json")

			public:
				EncapsulationPlugin();
				~EncapsulationPlugin();

				bool initialize(const QStringList &arguments, QString *errorString);
				void extensionsInitialized();
				ShutdownFlag aboutToShutdown();

			private slots:
				void triggerAction();

			private:
				QSharedPointer<Settings> m_settings;
		};

	} // namespace Internal
} // namespace Encapsulation

#endif // ENCAPSULATION_H

