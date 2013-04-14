#ifndef WLBINVENTORYLOGQUERYRESPONSE_H
#define WLBINVENTORYLOGQUERYRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/WlbItemInventoryLog.h>


/**
 * @brief TOP RESPONSE API: 通过商品ID等几个条件来分页查询库存变更记录
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbInventorylogQueryResponse : public TaoResponse
{
public:
 virtual ~WlbInventorylogQueryResponse() { }

  QList<WlbItemInventoryLog> getInventoryLogList() const;
  void setInventoryLogList (QList<WlbItemInventoryLog> inventoryLogList);  qlonglong getTotalCount() const;
  void setTotalCount (qlonglong totalCount);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 库存变更记录列表
 **/
  QList<WlbItemInventoryLog> inventoryLogList;

/**
 * @brief 记录数
 **/
  qlonglong totalCount;

};

#endif
