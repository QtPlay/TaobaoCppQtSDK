#ifndef WLBORDERSCHEDULERULEDELETERESPONSE_H
#define WLBORDERSCHEDULERULEDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 删除单个订单调度规则
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbOrderscheduleruleDeleteResponse : public TaoResponse
{
public:
 virtual ~WlbOrderscheduleruleDeleteResponse() { }

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
