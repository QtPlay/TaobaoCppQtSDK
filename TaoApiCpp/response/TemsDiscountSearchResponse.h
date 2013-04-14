#ifndef TEMSDISCOUNTSEARCHRESPONSE_H
#define TEMSDISCOUNTSEARCHRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/TmallBrand.h>
#include <TaoApiCpp/domain/TmallCat.h>
#include <TaoApiCpp/domain/TmallSearchItem.h>
#include <TaoApiCpp/domain/TmallMinisite.h>


/**
 * @brief TOP RESPONSE API: 获取天猫折扣商品的精选结果。在得到商品ID列表后，再调用 taobao.taobaoke.widget.items.convert 获取有佣金的淘客推广链接。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TemsDiscountSearchResponse : public TaoResponse
{
public:
 virtual ~TemsDiscountSearchResponse() { }

  QList<TmallBrand> getBrandList() const;
  void setBrandList (QList<TmallBrand> brandList);  QList<TmallCat> getCatList() const;
  void setCatList (QList<TmallCat> catList);  QList<TmallSearchItem> getItemList() const;
  void setItemList (QList<TmallSearchItem> itemList);  QList<TmallMinisite> getMinisiteList() const;
  void setMinisiteList (QList<TmallMinisite> minisiteList);  qlonglong getPage() const;
  void setPage (qlonglong page);  qlonglong getPageSize() const;
  void setPageSize (qlonglong pageSize);  QString getParamValue() const;
  void setParamValue (QString paramValue);  QString getSearchUrl() const;
  void setSearchUrl (QString searchUrl);  qlonglong getTotalPage() const;
  void setTotalPage (qlonglong totalPage);  QString getTotalResults() const;
  void setTotalResults (QString totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 搜索结果品牌列表
 **/
  QList<TmallBrand> brandList;

/**
 * @brief 搜索结果类目列表
 **/
  QList<TmallCat> catList;

/**
 * @brief 搜索结果宝贝列表
 **/
  QList<TmallSearchItem> itemList;

/**
 * @brief 搜索结果minisite列表
 **/
  QList<TmallMinisite> minisiteList;

/**
 * @brief 当前页数
 **/
  qlonglong page;

/**
 * @brief 每页搜索返回数
 **/
  qlonglong pageSize;

/**
 * @brief 搜索关键词
 **/
  QString paramValue;

/**
 * @brief 搜索的URL
 **/
  QString searchUrl;

/**
 * @brief 搜索总页数
 **/
  qlonglong totalPage;

/**
 * @brief 搜索结果总数
 **/
  QString totalResults;

};

#endif
