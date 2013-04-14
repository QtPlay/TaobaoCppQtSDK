#ifndef REFUNDMESSAGE_H
#define REFUNDMESSAGE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/PicUrl.h>


/**
 * @brief 留言/凭证数据结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RefundMessage : public TaoDomain
{

public:
 virtual ~RefundMessage() { }

  QString getContent() const;
  void setContent (QString content);
  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  qlonglong getId() const;
  void setId (qlonglong id);
  QString getMessageType() const;
  void setMessageType (QString messageType);
  qlonglong getOwnerId() const;
  void setOwnerId (qlonglong ownerId);
  QString getOwnerNick() const;
  void setOwnerNick (QString ownerNick);
  QString getOwnerRole() const;
  void setOwnerRole (QString ownerRole);
  QList<PicUrl> getPicUrls() const;
  void setPicUrls (QList<PicUrl> picUrls);
  qlonglong getRefundId() const;
  void setRefundId (qlonglong refundId);
  
  virtual void parseResponse();

private:
/**
 * @brief 留言内容。最大长度: 400个字节
 **/
  QString content;

/**
 * @brief 留言创建时间。格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime created;

/**
 * @brief 留言编号
 **/
  qlonglong id;

/**
 * @brief 退款类型：NORMAL（普通留言），RETURN_GOODS_APPROVED（卖家留退货地址时留言）；如果为RETURN_GOODS_APPROVED，则退款留言中有卖家收货地址
 **/
  QString messageType;

/**
 * @brief 留言者编号
 **/
  qlonglong ownerId;

/**
 * @brief 留言者昵称
 **/
  QString ownerNick;

/**
 * @brief 留言者身份
1代表买家，2代表卖家，3代表小二
 **/
  QString ownerRole;

/**
 * @brief 凭证附件地址（图片）
 **/
  QList<PicUrl> picUrls;

/**
 * @brief 退款编号。
 **/
  qlonglong refundId;

};

#endif  /* REFUNDMESSAGE_H */
