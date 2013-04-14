#ifndef FAVORITEADDREQUEST_H
#define FAVORITEADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FavoriteAddResponse.h>

/**
 * TOP API: 添加商品或店铺到收藏夹
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FavoriteAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getCollectType() const
;  void setCollectType (QString collectType);

 qlonglong getItemNumid() const
;  void setItemNumid (qlonglong itemNumid);

 bool getShared() const
;  void setShared (bool shared);


  virtual FavoriteAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief ITEM表示宝贝，SHOP表示店铺，只能传入这两者之一
 **/
  QString collectType;

/**
 * @brief 如果收藏的是商品，就传num_iid，如果是店铺，就传入sid
 **/
  qlonglong itemNumid;

/**
 * @brief 该收藏是否公开
 **/
  bool shared;

};

#endif  /* FAVORITEADDREQUEST_H */
