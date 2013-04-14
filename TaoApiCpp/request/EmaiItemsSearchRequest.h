#ifndef EMAIITEMSSEARCHREQUEST_H
#define EMAIITEMSSEARCHREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/EmaiItemsSearchResponse.h>

/**
 * TOP API: 根据品牌特卖（temai.tmall.com）类目返回品牌特卖商品列表。在得到商品ID列表后，再调用taobao.item.get获取商品详情，再调用taobao.taobaoke.items.convert 获取有佣金的淘客推广链接
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class EmaiItemsSearchRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCat() const
;  void setCat (qlonglong cat);

 QString getSort() const
;  void setSort (QString sort);

 qlonglong getStart() const
;  void setStart (qlonglong start);


  virtual EmaiItemsSearchResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 特卖前台类目id，传入的必须是特卖类目50100982或其下的二级类目。
 **/
  qlonglong cat;

/**
 * @brief 排序类型。类型包括： s: 人气排序 p: 价格从低到高; pd: 价格从高到低; d: 月销量从高到低; pt: 按发布时间排序.
 **/
  QString sort;

/**
 * @brief 表示查询起始位置: 
start=0:返回第1条记录到第48条记录（即第一页）； 
start=48:返回第48条记录到第96条记录（即第二页）； 
start=96，start=144，start=192...... 
依此类推，每次加start值加48(每页返回记录数固定为48条)
 **/
  qlonglong start;

};

#endif  /* EMAIITEMSSEARCHREQUEST_H */
