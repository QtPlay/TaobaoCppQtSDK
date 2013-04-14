#ifndef DELIVERYTEMPLATEGETRESPONSE_H
#define DELIVERYTEMPLATEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/DeliveryTemplate.h>


/**
 * @brief TOP RESPONSE API: 获取用户指定运费模板信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class DeliveryTemplateGetResponse : public TaoResponse
{
public:
 virtual ~DeliveryTemplateGetResponse() { }

  QList<DeliveryTemplate> getDeliveryTemplates() const;
  void setDeliveryTemplates (QList<DeliveryTemplate> deliveryTemplates);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 运费模板列表
 **/
  QList<DeliveryTemplate> deliveryTemplates;

/**
 * @brief 获得到符合条件的结果总数
 **/
  qlonglong totalResults;

};

#endif
