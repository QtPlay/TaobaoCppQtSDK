#ifndef ITEMRECOMMENDADDREQUEST_H
#define ITEMRECOMMENDADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemRecommendAddResponse.h>

/**
 * TOP API: 将当前用户指定商品设置为橱窗推荐状态 
橱窗推荐需要用户有剩余橱窗位才可以顺利执行 
这个Item所属卖家从传入的session中获取，需要session绑定 
需要判断橱窗推荐是否已满，橱窗推荐已满停止调用橱窗推荐接口，2010年1月底开放查询剩余橱窗推荐数后可以按数量橱窗推荐商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemRecommendAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getNumIid() const
;  void setNumIid (qlonglong numIid);


  virtual ItemRecommendAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品数字ID，该参数必须
 **/
  qlonglong numIid;

};

#endif  /* ITEMRECOMMENDADDREQUEST_H */
