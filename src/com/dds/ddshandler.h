#ifndef _DDSHANDLER_H_
#define _DDSHANDLER_H_

#include <extevhan.h>

#include<fastdds/dds/subscriber/DataReader.hpp>

#include "ddslayer.h"

using namespace forte::com_infra;

namespace forte {
  namespace com_infra {
    class CDDSHandler : public CExternalEventHandler {
      DECLARE_HANDLER(CDDSHandler)

      public: // methods overriden from the external event handler
        void enableHandler() override {}
        void disableHandler() override {}
        void setPriority(int paPriority) override {}
        int getPriority() const override { return 0; }

      public: // callback methods for data reader listeners
        void onDataAvailable(DataReader* pa_pReader);

      public: // custom methods for this handler
        void registerTopic(const std::string pa_sTopicName, CDDSComLayer* pa_pComLayer);
        void unregisterTopic(const std::string pa_sTopicName);
        CDDSComLayer* getTopicLayer(const std::string pa_sTopicName);

      private:
        std::map<std::string, CDDSComLayer*> mTopicLayer;
    };
  }
}

#endif