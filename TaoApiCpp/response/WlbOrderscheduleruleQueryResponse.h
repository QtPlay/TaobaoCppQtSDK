#ifndef WLBORDERSCHEDULERULEQUERYRESPONSE_H
#define WLBORDERSCHEDULERULEQUERYRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/WlbOrderScheduleRule.h>


/**
 * @brief TOP RESPONSE API: 查询某个卖家的所有订单调度规则，提供分页查询。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbOrderscheduleruleQueryResponse : public TaoResponse
{
public:
 virtual ~WlbOrderscheduleruleQueryResponse() { }

  QList<WlbOrderScheduleRule> getOrderScheduleRuleList() const;
  void setOrderScheduleRuleList (QList<WlbOrderScheduleRule> orderScheduleRuleList);  qlonglong getTotalCount() const;
  void setTotalCount (qlonglong totalCount);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 订单调度规则列表
 **/
  QList<WlbOrderScheduleRule> orderScheduleRuleList;

/**
 * @brief 结果总数
 **/
  qlonglong totalCount;

};

#endif
