#ifndef DELIVERYTEMPLATEDELETERESPONSE_H
#define DELIVERYTEMPLATEDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 根据用户指定的模板ID删除指定的模板
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class DeliveryTemplateDeleteResponse : public TaoResponse
{
public:
 virtual ~DeliveryTemplateDeleteResponse() { }

  bool getComplete() const;
  void setComplete (bool complete);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 表示删除成功还是失败
 **/
  bool complete;

};

#endif
