#ifndef INVENTORYSTOREMANAGERESPONSE_H
#define INVENTORYSTOREMANAGERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Store.h>


/**
 * @brief TOP RESPONSE API: 创建商家仓或者更新商家仓信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryStoreManageResponse : public TaoResponse
{
public:
 virtual ~InventoryStoreManageResponse() { }

  QList<Store> getStoreList() const;
  void setStoreList (QList<Store> storeList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回结果
 **/
  QList<Store> storeList;

};

#endif
