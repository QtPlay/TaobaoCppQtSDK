#ifndef WLBORDERSCHEDULERULEADDRESPONSE_H
#define WLBORDERSCHEDULERULEADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 为订单的自动流转设置订单调度规则。规则设定之后，可以根据发货地区，精确路由订单至指定仓库处理。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbOrderScheduleRuleAddResponse : public TaoResponse
{
public:
 virtual ~WlbOrderScheduleRuleAddResponse() { }

  qlonglong getScheduleRuleId() const;
  void setScheduleRuleId (qlonglong scheduleRuleId);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 新增成功的订单调度规则id
 **/
  qlonglong scheduleRuleId;

};

#endif
