#ifndef ITEMIMGDELETEREQUEST_H
#define ITEMIMGDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemImgDeleteResponse.h>

/**
 * TOP API: 删除itemimg_id 所指定的商品图片  
传入的num_iid所对应的商品必须属于当前会话的用户  
itemimg_id对应的图片需要属于num_iid对应的商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemImgDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getId() const
;  void setId (qlonglong id);

 qlonglong getNumIid() const
;  void setNumIid (qlonglong numIid);


  virtual ItemImgDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品图片ID
 **/
  qlonglong id;

/**
 * @brief 商品数字ID，必选
 **/
  qlonglong numIid;

};

#endif  /* ITEMIMGDELETEREQUEST_H */
