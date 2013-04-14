#ifndef WANGWANGESERVICEEVALSGETRESPONSE_H
#define WANGWANGESERVICEEVALSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/EvalDetail.h>


/**
 * @brief TOP RESPONSE API: 根据用户id查询用户对应的评价详细情况， 
主账号id可以查询店铺内子账号的评价 
组管理员可以查询组内账号的评价 
非管理员的子账号可以查自己的评价
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WangwangEserviceEvalsGetResponse : public TaoResponse
{
public:
 virtual ~WangwangEserviceEvalsGetResponse() { }

  qlonglong getResultCode() const;
  void setResultCode (qlonglong resultCode);  qlonglong getResultCount() const;
  void setResultCount (qlonglong resultCount);  QList<EvalDetail> getStaffEvalDetails() const;
  void setStaffEvalDetails (QList<EvalDetail> staffEvalDetails);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 0表示成功
 **/
  qlonglong resultCode;

/**
 * @brief 总条数
 **/
  qlonglong resultCount;

/**
 * @brief 评价具体数据
 **/
  QList<EvalDetail> staffEvalDetails;

};

#endif
