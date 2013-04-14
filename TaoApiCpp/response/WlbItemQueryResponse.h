#ifndef WLBITEMQUERYRESPONSE_H
#define WLBITEMQUERYRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/WlbItem.h>


/**
 * @brief TOP RESPONSE API: 根据状态、卖家、SKU等信息查询商品列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemQueryResponse : public TaoResponse
{
public:
 virtual ~WlbItemQueryResponse() { }

  QList<WlbItem> getItemList() const;
  void setItemList (QList<WlbItem> itemList);  qlonglong getTotalCount() const;
  void setTotalCount (qlonglong totalCount);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 商品信息列表
 **/
  QList<WlbItem> itemList;

/**
 * @brief 结果总数
 **/
  qlonglong totalCount;

};

#endif
