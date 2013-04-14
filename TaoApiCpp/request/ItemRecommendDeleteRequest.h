#ifndef ITEMRECOMMENDDELETEREQUEST_H
#define ITEMRECOMMENDDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemRecommendDeleteResponse.h>

/**
 * TOP API: 取消当前用户指定商品的橱窗推荐状态 
这个Item所属卖家从传入的session中获取，需要session绑定
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemRecommendDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getNumIid() const
;  void setNumIid (qlonglong numIid);


  virtual ItemRecommendDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品数字ID，该参数必须
 **/
  qlonglong numIid;

};

#endif  /* ITEMRECOMMENDDELETEREQUEST_H */
