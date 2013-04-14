#ifndef PROMOTIONLIMITDISCOUNTGETRESPONSE_H
#define PROMOTIONLIMITDISCOUNTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/LimitDiscount.h>


/**
 * @brief TOP RESPONSE API: 分页查询某个卖家的限时打折信息。每页20条数据，按照结束时间降序排列。也可指定某一个限时打折id查询唯一的限时打折信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionLimitdiscountGetResponse : public TaoResponse
{
public:
 virtual ~PromotionLimitdiscountGetResponse() { }

  QList<LimitDiscount> getLimitDiscountList() const;
  void setLimitDiscountList (QList<LimitDiscount> limitDiscountList);  qlonglong getTotalCount() const;
  void setTotalCount (qlonglong totalCount);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 限时打折列表。
 **/
  QList<LimitDiscount> limitDiscountList;

/**
 * @brief 满足该查询条件的限时打折总数量。
 **/
  qlonglong totalCount;

};

#endif
