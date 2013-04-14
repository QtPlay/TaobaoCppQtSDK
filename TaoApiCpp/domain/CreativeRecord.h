#ifndef CREATIVERECORD_H
#define CREATIVERECORD_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 创意修改记录，只记录最后一次修改
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CreativeRecord : public TaoDomain
{

public:
 virtual ~CreativeRecord() { }

  QString getAuditDesc() const;
  void setAuditDesc (QString auditDesc);
  QString getAuditStatus() const;
  void setAuditStatus (QString auditStatus);
  QDateTime getCreateTime() const;
  void setCreateTime (QDateTime createTime);
  qlonglong getCreativeId() const;
  void setCreativeId (qlonglong creativeId);
  QString getImgUrl() const;
  void setImgUrl (QString imgUrl);
  QDateTime getModifiedTime() const;
  void setModifiedTime (QDateTime modifiedTime);
  QDateTime getModifyTime() const;
  void setModifyTime (QDateTime modifyTime);
  QString getNick() const;
  void setNick (QString nick);
  QString getOldImgUrl() const;
  void setOldImgUrl (QString oldImgUrl);
  QString getOldTitle() const;
  void setOldTitle (QString oldTitle);
  QString getTitle() const;
  void setTitle (QString title);
  
  virtual void parseResponse();

private:
/**
 * @brief 审核拒绝原因描述
 **/
  QString auditDesc;

/**
 * @brief 审核状态： audit_wait-待审核；audit_pass-审核通过(上线)；audit_reject-审核拒绝；默认为audit_pass。
 **/
  QString auditStatus;

/**
 * @brief 创建时间
 **/
  QDateTime createTime;

/**
 * @brief 关键词id
 **/
  qlonglong creativeId;

/**
 * @brief 创意图片地址，必须是推广组对应商品的图片之一
 **/
  QString imgUrl;

/**
 * @brief 系统记录最后修改时间
 **/
  QDateTime modifiedTime;

/**
 * @brief 创意被修改的时间
 **/
  QDateTime modifyTime;

/**
 * @brief 主人昵称
 **/
  QString nick;

/**
 * @brief 修改前创意图片地址
 **/
  QString oldImgUrl;

/**
 * @brief 修改前创意标题
 **/
  QString oldTitle;

/**
 * @brief 创意标题，最多20个汉字
 **/
  QString title;

};

#endif  /* CREATIVERECORD_H */
