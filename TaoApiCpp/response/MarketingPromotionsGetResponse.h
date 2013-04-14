#ifndef MARKETINGPROMOTIONSGETRESPONSE_H
#define MARKETINGPROMOTIONSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Promotion.h>


/**
 * @brief TOP RESPONSE API: 根据商品ID查询卖家使用该第三方工具对商品设置的所有优惠策略
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class MarketingPromotionsGetResponse : public TaoResponse
{
public:
 virtual ~MarketingPromotionsGetResponse() { }

  QList<Promotion> getPromotions() const;
  void setPromotions (QList<Promotion> promotions);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 商品对应的所有优惠列表
 **/
  QList<Promotion> promotions;

/**
 * @brief 结果总数
 **/
  qlonglong totalResults;

};

#endif
