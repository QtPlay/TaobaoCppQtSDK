#ifndef TRADEMEMOUPDATEREQUEST_H
#define TRADEMEMOUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TradeMemoUpdateResponse.h>

/**
 * TOP API: 需要商家或以上权限才可调用此接口，可重复调用本接口更新交易备注，本接口同时具有添加备注的功能
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeMemoUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getFlag() const
;  void setFlag (qlonglong flag);

 QString getMemo() const
;  void setMemo (QString memo);

 bool getReset() const
;  void setReset (bool reset);

 qlonglong getTid() const
;  void setTid (qlonglong tid);


  virtual TradeMemoUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 交易备注旗帜，可选值为：0(灰色), 1(红色), 2(黄色), 3(绿色), 4(蓝色), 5(粉红色)，默认值为0
 **/
  qlonglong flag;

/**
 * @brief 交易备注。最大长度: 1000个字节
 **/
  QString memo;

/**
 * @brief 是否对memo的值置空 
若为true，则不管传入的memo字段的值是否为空，都将会对已有的memo值清空，慎用； 
若用false，则会根据memo是否为空来修改memo的值：若memo为空则忽略对已有memo字段的修改，若memo非空，则使用新传入的memo覆盖已有的memo的值
 **/
  bool reset;

/**
 * @brief 交易编号
 **/
  qlonglong tid;

};

#endif  /* TRADEMEMOUPDATEREQUEST_H */
