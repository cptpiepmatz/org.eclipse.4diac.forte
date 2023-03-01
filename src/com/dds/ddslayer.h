#ifndef _DDSCOMLAYER_H_
#define _DDSCOMLAYER_H_

#include "ddspubsub.h"

#include "comlayer.h"

namespace forte {
  
  namespace com_infra {

    class CDDSComLayer : public CComLayer {
      public:
        CDDSComLayer(CComLayer* paUpperLayer, CBaseCommFB* paComFB);
        virtual ~CDDSComLayer();

        EComResponse openConnection(char *pa_acLayerParameter) override;
        EComResponse openPublisherConnection();
        EComResponse openSubscriberConnection();
        void closeConnection() override;

        EComResponse sendData(void *paData, unsigned int paSize) override;
        EComResponse recvData(const void *paData, unsigned int paSize) override;

        EComResponse processInterrupt() override;

        // other methods

      private:
        forte::com_infra::EComServiceType m_eCommServiceType;

        std::string m_TopicName;
        std::string m_TopicType;

        CDDSPubSub* publisher;
        CDDSPubSub* subscriber;
    };

  }

}

#endif /* _DDSCOMLAYER_H_ */
