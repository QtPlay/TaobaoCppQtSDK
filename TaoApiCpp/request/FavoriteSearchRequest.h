#ifndef FAVORITESEARCHREQUEST_H
#define FAVORITESEARCHREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FavoriteSearchResponse.h>

/**
 * TOP API: 查询淘宝用户收藏的商品或店铺信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FavoriteSearchRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getCollectType() const
;  void setCollectType (QString collectType);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);


  virtual FavoriteSearchResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief ITEM表示宝贝，SHOP表示商铺，collect_type只能为这两者之一
 **/
  QString collectType;

/**
 * @brief 页码。取值范围:大于零的整数; 默认值:1。一页20条记录。
 **/
  qlonglong pageNo;

};

#endif  /* FAVORITESEARCHREQUEST_H */
