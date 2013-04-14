#ifndef WLBTMSORDERQUERYRESPONSE_H
#define WLBTMSORDERQUERYRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/WlbTmsOrder.h>


/**
 * @brief TOP RESPONSE API: 通过物流订单编号分页查询物流信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbTmsorderQueryResponse : public TaoResponse
{
public:
 virtual ~WlbTmsorderQueryResponse() { }

  QList<WlbTmsOrder> getTmsOrderList() const;
  void setTmsOrderList (QList<WlbTmsOrder> tmsOrderList);  qlonglong getTotalCount() const;
  void setTotalCount (qlonglong totalCount);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 物流订单运单信息列表
 **/
  QList<WlbTmsOrder> tmsOrderList;

/**
 * @brief 结果总数
 **/
  qlonglong totalCount;

};

#endif
