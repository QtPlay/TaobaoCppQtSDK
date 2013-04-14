#ifndef WLBORDERSCHEDULERULEUPDATERESPONSE_H
#define WLBORDERSCHEDULERULEUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 修改物流宝订单调度规则
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbOrderScheduleRuleUpdateResponse : public TaoResponse
{
public:
 virtual ~WlbOrderScheduleRuleUpdateResponse() { }

  QDateTime getGmtModified() const;
  void setGmtModified (QDateTime gmtModified);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 修改时间
 **/
  QDateTime gmtModified;

};

#endif
