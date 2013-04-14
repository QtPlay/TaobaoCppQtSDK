#ifndef INVENTORYSTOREQUERYRESPONSE_H
#define INVENTORYSTOREQUERYRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Store.h>


/**
 * @brief TOP RESPONSE API: 查询商家仓信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryStoreQueryResponse : public TaoResponse
{
public:
 virtual ~InventoryStoreQueryResponse() { }

  QList<Store> getStoreList() const;
  void setStoreList (QList<Store> storeList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 仓库列表
 **/
  QList<Store> storeList;

};

#endif
