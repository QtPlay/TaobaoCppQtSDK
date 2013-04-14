#ifndef FENXIAODISCOUNTSGETRESPONSE_H
#define FENXIAODISCOUNTSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Discount.h>


/**
 * @brief TOP RESPONSE API: 查询折扣信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoDiscountsGetResponse : public TaoResponse
{
public:
 virtual ~FenxiaoDiscountsGetResponse() { }

  QList<Discount> getDiscounts() const;
  void setDiscounts (QList<Discount> discounts);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 折扣数据结构
 **/
  QList<Discount> discounts;

/**
 * @brief 记录数
 **/
  qlonglong totalResults;

};

#endif
