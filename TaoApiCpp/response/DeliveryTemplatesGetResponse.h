#ifndef DELIVERYTEMPLATESGETRESPONSE_H
#define DELIVERYTEMPLATESGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/DeliveryTemplate.h>


/**
 * @brief TOP RESPONSE API: 根据用户ID获取用户下所有模板
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class DeliveryTemplatesGetResponse : public TaoResponse
{
public:
 virtual ~DeliveryTemplatesGetResponse() { }

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
