#ifndef AFTERSALEGETRESPONSE_H
#define AFTERSALEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/AfterSale.h>


/**
 * @brief TOP RESPONSE API: 查询用户设置的售后服务模板，仅返回标题和id
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class AftersaleGetResponse : public TaoResponse
{
public:
 virtual ~AftersaleGetResponse() { }

  QList<AfterSale> getAfterSales() const;
  void setAfterSales (QList<AfterSale> afterSales);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 售后服务返回对象
 **/
  QList<AfterSale> afterSales;

};

#endif
