#ifndef DELIVERYTEMPLATEADDRESPONSE_H
#define DELIVERYTEMPLATEADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/DeliveryTemplate.h>


/**
 * @brief TOP RESPONSE API: 新增运费模板
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class DeliveryTemplateAddResponse : public TaoResponse
{
public:
 virtual ~DeliveryTemplateAddResponse() { }

  DeliveryTemplate getDeliveryTemplate() const;
  void setDeliveryTemplate (DeliveryTemplate deliveryTemplate);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 模板对象
 **/
  DeliveryTemplate deliveryTemplate;

};

#endif
