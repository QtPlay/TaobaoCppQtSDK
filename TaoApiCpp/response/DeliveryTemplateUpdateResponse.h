#ifndef DELIVERYTEMPLATEUPDATERESPONSE_H
#define DELIVERYTEMPLATEUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 修改运费模板
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class DeliveryTemplateUpdateResponse : public TaoResponse
{
public:
 virtual ~DeliveryTemplateUpdateResponse() { }

  bool getComplete() const;
  void setComplete (bool complete);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 表示修改是否成功
 **/
  bool complete;

};

#endif
