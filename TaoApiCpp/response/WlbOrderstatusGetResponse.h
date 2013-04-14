#ifndef WLBORDERSTATUSGETRESPONSE_H
#define WLBORDERSTATUSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/WlbProcessStatus.h>


/**
 * @brief TOP RESPONSE API: 根据物流宝订单号查询物流宝订单至目前为止的流转状态列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbOrderstatusGetResponse : public TaoResponse
{
public:
 virtual ~WlbOrderstatusGetResponse() { }

  QList<WlbProcessStatus> getWlbOrderStatus() const;
  void setWlbOrderStatus (QList<WlbProcessStatus> wlbOrderStatus);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 订单流转信息状态列表
 **/
  QList<WlbProcessStatus> wlbOrderStatus;

};

#endif
