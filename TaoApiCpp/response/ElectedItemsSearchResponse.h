#ifndef ELECTEDITEMSSEARCHRESPONSE_H
#define ELECTEDITEMSSEARCHRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/SelectedItem.h>


/**
 * @brief TOP RESPONSE API: 获取天猫各类目下精选商品列表。在得到商品ID列表后，再调用taobao.item.get获取商品详情，再调用taobao.taobaoke.items.convert 获取有佣金的淘客推广链接
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ElectedItemsSearchResponse : public TaoResponse
{
public:
 virtual ~ElectedItemsSearchResponse() { }

  QList<SelectedItem> getItemList() const;
  void setItemList (QList<SelectedItem> itemList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 天猫精选商品列表。同一天之内，同一个appkey请求同一个cid得到的商品列表是固定的，所以每天只需请求一次即可
 **/
  QList<SelectedItem> itemList;

};

#endif
