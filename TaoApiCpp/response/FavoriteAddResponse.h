#ifndef FAVORITEADDRESPONSE_H
#define FAVORITEADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 添加商品或店铺到收藏夹
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FavoriteAddResponse : public TaoResponse
{
public:
 virtual ~FavoriteAddResponse() { }

  bool getSuccess() const;
  void setSuccess (bool success);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 是否收藏成功
 **/
  bool success;

};

#endif
